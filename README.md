# Cwitter

Red social estilo Twitter desarrollada para la materia **Algoritmos y Estructuras de Datos**.

## Tecnologias

- ANSI C (C99)
- PDCurses (TUI)
- Archivos binarios para persistencia

## Arquitectura

El proyecto sigue una arquitectura por capas:

```
UI (PDCurses)
      |
Services
      |
Repositories
      |
Persistencia en archivos
```

### Capas

| Capa | Responsabilidad |
|------|----------------|
| **UI** | Mostrar menus, capturar teclado, dibujar pantallas, navegacion |
| **Services** | Logica de negocio: registro, login, tweets, busquedas |
| **Repositories** | Lectura/escritura de archivos, persistencia |
| **Models** | Entidades del sistema: User, Tweet |

## Funcionalidades Sprint 1

- Registro de usuarios
- Inicio de sesion
- Cierre de sesion
- Publicacion de tweets
- Modificacion de tweets
- Eliminacion de tweets
- Visualizacion del feed
- Busquedas
- Persistencia en archivos binarios

## Estructura del proyecto

```
cwitter/
├── README.md
├── docs/
│   ├── BITACORA.md
│   └── TESTS.md
├── data/
│   ├── users.dat
│   └── tweets.dat
├── external/
│   └── pdcurses/
├── include/
│   ├── app/
│   │   └── app.h
│   ├── models/
│   │   ├── user.h
│   │   └── tweet.h
│   ├── repositories/
│   │   ├── user_repository.h
│   │   └── tweet_repository.h
│   ├── services/
│   │   ├── auth_service.h
│   │   ├── tweet_service.h
│   │   └── search_service.h
│   ├── ui/
│   │   ├── screen_main.h
│   │   ├── screen_login.h
│   │   ├── screen_register.h
│   │   ├── screen_feed.h
│   │   └── screen_tweet_editor.h
│   └── utils/
│       ├── file_utils.h
│       └── string_utils.h
├── src/
│   ├── main.c
│   ├── app/
│   │   └── app.c
│   ├── models/
│   │   ├── user.c
│   │   └── tweet.c
│   ├── repositories/
│   │   ├── user_repository.c
│   │   └── tweet_repository.c
│   ├── services/
│   │   ├── auth_service.c
│   │   ├── tweet_service.c
│   │   └── search_service.c
│   ├── ui/
│   │   ├── screen_main.c
│   │   ├── screen_login.c
│   │   ├── screen_register.c
│   │   ├── screen_feed.c
│   │   └── screen_tweet_editor.c
│   └── utils/
│       ├── file_utils.c
│       └── string_utils.c
└── build/
```

## Integrantes
- Adrián Martinez
- Matias Ezequiel Garcia
- Matias Nahuel Pizzi 
- Fabio Panasiuk