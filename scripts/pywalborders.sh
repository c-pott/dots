#!/bin/bash

hex_to_argb() {
    hex="${1#"#"}"
    echo "0xFF${hex^^}"
}

ACTIVE_HEX=$(sed -n '2p' ~/.cache/wal/colors)
INACTIVE_HEX=$(sed -n '1p' ~/.cache/wal/colors)

ACTIVE_COLOR=$(hex_to_argb "$ACTIVE_HEX")
INACTIVE_COLOR=$(hex_to_argb "$INACTIVE_HEX")

cat <<EOF > ~/.cache/hypr/colors.conf
general {
    col.active_border = $ACTIVE_COLOR
    col.inactive_border = $INACTIVE_COLOR
}
EOF
hyprctl reload
