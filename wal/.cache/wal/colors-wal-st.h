const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0f1424", /* black   */
  [1] = "#978B6E", /* red     */
  [2] = "#2E6097", /* green   */
  [3] = "#5B6AA5", /* yellow  */
  [4] = "#3276C2", /* blue    */
  [5] = "#4E9FCE", /* magenta */
  [6] = "#5AA3D7", /* cyan    */
  [7] = "#c3c4c8", /* white   */

  /* 8 bright colors */
  [8]  = "#5e6374",  /* black   */
  [9]  = "#978B6E",  /* red     */
  [10] = "#2E6097", /* green   */
  [11] = "#5B6AA5", /* yellow  */
  [12] = "#3276C2", /* blue    */
  [13] = "#4E9FCE", /* magenta */
  [14] = "#5AA3D7", /* cyan    */
  [15] = "#c3c4c8", /* white   */

  /* special colors */
  [256] = "#0f1424", /* background */
  [257] = "#c3c4c8", /* foreground */
  [258] = "#c3c4c8",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
