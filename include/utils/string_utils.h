#ifndef STRING_UTILS_H
#define STRING_UTILS_H

/**
 * @file string_utils.h
 * @brief Utilidades para manipulacion de cadenas.
 */

/** Elimina espacios en blanco al inicio y fin de la cadena. */
void string_trim(char *str);

/** Convierte la cadena a minusculas. */
void string_to_lower(char *str);

/** Verifica si la cadena esta vacia (solo espacios o nula). Retorna 1 si vacia. */
int string_is_empty(const char *str);

/** Copia como maximo n-1 caracteres de src a dst. */
void string_safe_copy(char *dst, const char *src, int n);

#endif
