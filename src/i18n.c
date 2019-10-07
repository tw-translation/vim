/* vi:set ts=8 sts=4 sw=4 noet:
 *
 * VIM - Vi IMproved	by Bram Moolenaar
 *
 * Do ":help uganda"  in Vim to read copying and usage conditions.
 * Do ":help credits" in Vim to see a list of people who contributed.
 * See README.txt for an overview of the Vim source code.
 */

/*
 * i18n.c: i18n-related things
 */

#include "vim.h" // sprintf

/*! \brief Return the processed error 
 * messages
 * 
 * \param code error code, just like the `123' of `E123'.
 * \param msg error details
 * \return the processed error messages, it would like this:
 * ```
 * errmsg(515, "No buffers were unloaded");
 * -> "E515: No buffers were unloaded"
 */
char* errmsg(int code, char* msg) {
  return sprintf("E%d: %s", code, msg)
}

/*! \brief Return the processed warning 
 * messages
 * 
 * \param code warn code, just like the `123' of `E123'.
 * \param msg warn details
 * \return the processed waring messages, it would like this:
 * ```
 * wrnmsg(14, "List of filenames overflow");
 * -> "W14: List of filenames overflow"
 */
char* wrnmsg(int code, char* msg) {
  return sprintf("W%d: %s", code, msg)
}
