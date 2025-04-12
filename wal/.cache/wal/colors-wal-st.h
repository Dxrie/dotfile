const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#242d1e", /* black   */
  [1] = "#A5C25D", /* red     */
  [2] = "#467687", /* green   */
  [3] = "#3CA7BF", /* yellow  */
  [4] = "#57949D", /* blue    */
  [5] = "#A7AC97", /* magenta */
  [6] = "#B8C0AC", /* cyan    */
  [7] = "#c8cac6", /* white   */

  /* 8 bright colors */
  [8]  = "#6e7c65",  /* black   */
  [9]  = "#A5C25D",  /* red     */
  [10] = "#467687", /* green   */
  [11] = "#3CA7BF", /* yellow  */
  [12] = "#57949D", /* blue    */
  [13] = "#A7AC97", /* magenta */
  [14] = "#B8C0AC", /* cyan    */
  [15] = "#c8cac6", /* white   */

  /* special colors */
  [256] = "#242d1e", /* background */
  [257] = "#c8cac6", /* foreground */
  [258] = "#c8cac6",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
