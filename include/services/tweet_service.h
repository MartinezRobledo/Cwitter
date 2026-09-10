#ifndef TWEET_SERVICE_H
#define TWEET_SERVICE_H

#include "models/tweet.h"

/**
 * @file tweet_service.h
 * @brief Servicio de publicacion, edicion y eliminacion de tweets.
 */

/** Publica un tweet. Retorna 1 si exitoso. Requiere sesion activa. */
int tweet_publish(const char *text);

/** Edita un tweet existente. Retorna 1 si exitoso. */
int tweet_edit(int tweet_id, const char *new_text);

/** Elimina un tweet. Retorna 1 si exitoso. */
int tweet_delete(int tweet_id);

/** Retorna la cantidad total de tweets. */
int tweet_count(void);

/** Retorna un puntero al tweet con el ID dado, o NULL. */
Tweet *tweet_find_by_id(int tweet_id);

#endif
