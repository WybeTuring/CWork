#ifndef LINE_H
#define LINE_H

/* clears the current line
*/
void clear_line(void);

/* adds a word to a current line, if it is not the first word of the line, it adds  a space before it
*/
void add_word(const char *word);

/*space remaining returns the number of characters left in the current line
*/
int space_remaining(void);

/* write_line writes the current line with justification
*/
void write_line(void);
/*Writes the current line without justtification, if the line is empty, does nothing
*/
void flush_line(void);

#endif
