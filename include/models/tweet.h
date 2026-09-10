#ifndef TWEET_H
#define TWEET_H

/**
 * @file tweet.h
 * @brief Modelo de datos para tweets de Cwitter.
 */

typedef struct
{
    int id;
    int userId;
    char text[141];
    long timestamp;
} Tweet;

#endif
