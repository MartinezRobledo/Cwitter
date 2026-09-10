# Plantilla de Pruebas - Cwitter

Registro de casos de prueba para el proyecto Cwitter.

## Tabla de Pruebas

| ID | Situacion | Operacion | Resultado esperado | Resultado obtenido |
|----|-----------|-----------|-------------------|-------------------|
| T01 | Plataforma vacia | Iniciar sesion con usuario inexistente | Mensaje de error, sesion no iniciada | Pendiente |
| T02 | Plataforma vacia | Registrar usuario nuevo | Registro exitoso | Pendiente |
| T03 | Plataforma vacia | Registrar usuario duplicado | Mensaje de error | Pendiente |
| T04 | Usuario registrado | Iniciar sesion con credenciales correctas | Sesion iniciada correctamente | Pendiente |
| T05 | Usuario registrado | Cerrar sesion | Sesion cerrada correctamente | Pendiente |
| T06 | Sesion activa | Publicar tweet | Tweet publicado exitosamente | Pendiente |
| T07 | Sesion activa | Publicar tweet vacio | Mensaje de error | Pendiente |
| T08 | Sesion activa | Editar tweet propio | Tweet modificado | Pendiente |
| T09 | Sesion activa | Editar tweet ajeno | Mensaje de error | Pendiente |
| T10 | Sesion activa | Eliminar tweet propio | Tweet eliminado | Pendiente |
| T11 | Sesion activa | Eliminar tweet ajeno | Mensaje de error | Pendiente |
| T12 | Sesion activa | Ver feed | Se muestran tweets | Pendiente |
| T13 | Sin sesion | Publicar tweet | Mensaje de error, requiere login | Pendiente |
| T14 | Sin sesion | Ver feed | Mensaje de error, requiere login | Pendiente |
| T15 | Multiples tweets | Buscar por texto existente | Se encuentran tweets | Pendiente |
| T16 | Multiples tweets | Buscar por texto inexistente | Ningun resultado | Pendiente |
| T17 | Usuario sin tweets | Ver feed | Feed vacio | Pendiente |
| T18 | Tweets existentes | Eliminar primer tweet | Primer tweet eliminado, resto visible | Pendiente |
| T19 | Tweets existentes | Eliminar tweet intermedio | Tweet eliminado, orden conservado | Pendiente |
| T20 | Tweets existentes | Eliminar ultimo tweet | Ultimo tweet eliminado | Pendiente |
| T21 | Datos guardados | Reiniciar programa y verificar | Persistencia de datos intacta | Pendiente |
| T22 | Multiples usuarios | Buscar usuario existente | Se encuentra el usuario | Pendiente |
| T23 | Multiples usuarios | Buscar usuario inexistente | Ningun resultado | Pendiente |

## Casos especiales

- **T13**: Verifica que no se pueda publicar sin sesion activa.
- **T14**: Verifica que no se pueda ver el feed sin sesion activa.
- **T18-T20**: Verifican la correcta eliminacion de tweets en diferentes posiciones.
- **T21**: Verifica que los datos persistan correctamente entre ejecuciones.