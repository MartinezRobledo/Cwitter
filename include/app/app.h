#ifndef APP_H
#define APP_H

/**
 * @file app.h
 * @brief Inicializacion y ciclo principal de la aplicacion Cwitter.
 */

/** Inicializa la aplicacion. Retorna 0 si exitoso. */
int app_init(void);

/** Ejecuta el ciclo principal de la aplicacion. */
void app_run(void);

/** Libera recursos y finaliza la aplicacion. */
void app_shutdown(void);

#endif
