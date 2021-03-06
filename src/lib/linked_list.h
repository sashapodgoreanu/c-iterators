/**
 * MIT License
 *
 * Copyright (c) 2018 Rafael C. Nunes
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

struct list_s {
    char value[64];
    struct list_s *next;
};


typedef struct list_s list_t; // an abstraction of a list

/**
 * @brief Creates a new list and returns a pointer to a newly created list.
 */
list_t *list_init(const char *);
/**
 * @brief Pushes a node to the list returning a new head of the list.
 */
list_t *list_push(list_t *, const char *);
/**
 * @brief Finds a specific word in the list and returns a pointer to it. The
 * node isn't supposed to be changed.
 */
const list_t *list_search(list_t *, const char *);
/**
 * @brief Returns the head value of the list passed as parameter.
 */
const char *list_head(const list_t *);
/**
 * @brief Frees a list of values.
 */
void list_free(list_t *);


#endif // LINKED_LIST_H
