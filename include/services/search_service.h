#ifndef SEARCH_SERVICE_H
#define SEARCH_SERVICE_H

#include "models/tweet.h"
#include "models/user.h"

/**
 * @file search_service.h
 * @brief Servicio de busqueda de tweets y usuarios.
 */

/** Busca tweets que contengan el texto dado. Retorna cantidad encontrada. */
int search_tweets(const char *query, Tweet *results, int max);

/** Busca usuarios cuyo nombre contenga el texto dado. Retorna cantidad. */
int search_users(const char *query, User *results, int max);

#endif
