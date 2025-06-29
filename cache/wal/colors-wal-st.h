const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0d0a09", /* black   */
  [1] = "#4B3018", /* red     */
  [2] = "#4C3726", /* green   */
  [3] = "#674D2E", /* yellow  */
  [4] = "#4C4E49", /* blue    */
  [5] = "#93683A", /* magenta */
  [6] = "#77846C", /* cyan    */
  [7] = "#d7c5a3", /* white   */

  /* 8 bright colors */
  [8]  = "#968972",  /* black   */
  [9]  = "#4B3018",  /* red     */
  [10] = "#4C3726", /* green   */
  [11] = "#674D2E", /* yellow  */
  [12] = "#4C4E49", /* blue    */
  [13] = "#93683A", /* magenta */
  [14] = "#77846C", /* cyan    */
  [15] = "#d7c5a3", /* white   */

  /* special colors */
  [256] = "#0d0a09", /* background */
  [257] = "#d7c5a3", /* foreground */
  [258] = "#d7c5a3",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
