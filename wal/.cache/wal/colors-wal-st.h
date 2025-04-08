const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#12101e", /* black   */
  [1] = "#8C7893", /* red     */
  [2] = "#7C819B", /* green   */
  [3] = "#A293A9", /* yellow  */
  [4] = "#CAA7B9", /* blue    */
  [5] = "#BAB6C4", /* magenta */
  [6] = "#CABAC3", /* cyan    */
  [7] = "#c3c3c6", /* white   */

  /* 8 bright colors */
  [8]  = "#5f5d71",  /* black   */
  [9]  = "#8C7893",  /* red     */
  [10] = "#7C819B", /* green   */
  [11] = "#A293A9", /* yellow  */
  [12] = "#CAA7B9", /* blue    */
  [13] = "#BAB6C4", /* magenta */
  [14] = "#CABAC3", /* cyan    */
  [15] = "#c3c3c6", /* white   */

  /* special colors */
  [256] = "#12101e", /* background */
  [257] = "#c3c3c6", /* foreground */
  [258] = "#c3c3c6",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
