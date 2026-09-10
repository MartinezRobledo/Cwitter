#ifndef FILE_UTILS_H
#define FILE_UTILS_H

/**
 * @file file_utils.h
 * @brief Utilidades para manejo de archivos.
 */

/** Verifica si un archivo existe. Retorna 1 si existe. */
int file_exists(const char *path);

/** Crea un archivo vacio si no existe. Retorna 1 si exitoso. */
int file_create_if_missing(const char *path);

/** Retorna el tamano en bytes de un archivo. Retorna -1 en caso de error. */
long file_size(const char *path);

#endif
