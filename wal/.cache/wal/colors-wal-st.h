const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0F0F04", /* black   */
  [1] = "#635F4E", /* red     */
  [2] = "#906733", /* green   */
  [3] = "#C76A38", /* yellow  */
  [4] = "#90714D", /* blue    */
  [5] = "#6E8A39", /* magenta */
  [6] = "#A6915E", /* cyan    */
  [7] = "#c3c3c0", /* white   */

  /* 8 bright colors */
  [8]  = "#686855",  /* black   */
  [9]  = "#635F4E",  /* red     */
  [10] = "#906733", /* green   */
  [11] = "#C76A38", /* yellow  */
  [12] = "#90714D", /* blue    */
  [13] = "#6E8A39", /* magenta */
  [14] = "#A6915E", /* cyan    */
  [15] = "#c3c3c0", /* white   */

  /* special colors */
  [256] = "#0F0F04", /* background */
  [257] = "#c3c3c0", /* foreground */
  [258] = "#c3c3c0",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
