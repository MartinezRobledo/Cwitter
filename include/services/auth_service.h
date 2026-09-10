#ifndef AUTH_SERVICE_H
#define AUTH_SERVICE_H

/**
 * @file auth_service.h
 * @brief Servicio de autenticacion: registro, login y logout.
 */

/** Registra un nuevo usuario. Retorna 1 si exitoso, 0 si ya existe. */
int register_user(const char *username);

/** Inicia sesion con el nombre de usuario dado. Retorna 1 si exitoso. */
int login_user(const char *username);

/** Cierra la sesion actual. */
int logout_user(void);

/** Retorna el ID del usuario actualmente logueado, o -1 si no hay sesion. */
int auth_get_current_user_id(void);

#endif
