const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#272727", /* black   */
  [1] = "#c7c7c7", /* red     */
  [2] = "#909caa", /* green   */
  [3] = "#97a0aa", /* yellow  */
  [4] = "#9ea3aa", /* blue    */
  [5] = "#a9a9aa", /* magenta */
  [6] = "#b7b7b7", /* cyan    */
  [7] = "#c9c9c9", /* white   */

  /* 8 bright colors */
  [8]  = "#5d5d5d",  /* black   */
  [9]  = "#c7c7c7",  /* red     */
  [10] = "#909caa", /* green   */
  [11] = "#97a0aa", /* yellow  */
  [12] = "#9ea3aa", /* blue    */
  [13] = "#a9a9aa", /* magenta */
  [14] = "#b7b7b7", /* cyan    */
  [15] = "#c9c9c9", /* white   */

  /* special colors */
  [256] = "#272727", /* background */
  [257] = "#c9c9c9", /* foreground */
  [258] = "#c9c9c9",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
