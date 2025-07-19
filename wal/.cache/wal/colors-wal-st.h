const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0e1420", /* black   */
  [1] = "#A25C62", /* red     */
  [2] = "#B29B74", /* green   */
  [3] = "#697689", /* yellow  */
  [4] = "#9C7D85", /* blue    */
  [5] = "#788391", /* magenta */
  [6] = "#9B9FA7", /* cyan    */
  [7] = "#c2c4c7", /* white   */

  /* 8 bright colors */
  [8]  = "#5d6472",  /* black   */
  [9]  = "#A25C62",  /* red     */
  [10] = "#B29B74", /* green   */
  [11] = "#697689", /* yellow  */
  [12] = "#9C7D85", /* blue    */
  [13] = "#788391", /* magenta */
  [14] = "#9B9FA7", /* cyan    */
  [15] = "#c2c4c7", /* white   */

  /* special colors */
  [256] = "#0e1420", /* background */
  [257] = "#c2c4c7", /* foreground */
  [258] = "#c2c4c7",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
