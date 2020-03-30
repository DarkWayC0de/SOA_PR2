# Problemas de sincronización

Usando lo que hemos aprendido sobre cómo se resuelven los problemas clásicos de sincronización, vamos a resolver un problema algo más general y complejo.
En el wiki te proponemos varios problemas.
Escoger uno y resuélvelo. 

## Cómo empezar

Para empezar:

 1. Acepta la [actividad en GitHub Classroom](https://classroom.github.com/a/W-o4ockm).

    Obtendrás tu propia copia de este mismo repositorio para comenzar a trabajar.
    Por ejemplo, si la actividad se llama `soa-actividad01` y tu cuenta en GitHub es `alu0100123456`, tu nuevo repositorio se llamará `ull-esit-sistemas-operativos/soa-actividad01-alu0100123456`.

 2. [Clona](http://git.github.io/git-reference/#clone) el nuevo repositorio en tu ordenador.
 Esa será tu copia local del proyecto y el repositorio original `ull-esit-sistemas-operativos/soa-actividad01-alu0100123456` será `origin`.

 3. En tu copia local en tu ordenador no trabajes directamente en la rama `master`.
 Crear una rama `develop` y haz todos los cambios sobre ella:

    ~~~~.sh
    $ git checkout -b develop
    ~~~~

    Como comentaremos después, la idea es pasar los cambios a `master` solo cuando tengas algo definitivo. 

## Tareas

Trabaja en la rama `develop` de tu copia local siguiendo los pasos indicados a continuación:

 1. Resuelve el problema elegido.

 1. Haz _commits_ con frecuencia, según vayas avanzado en la implementación de la solución.
Usa los [comentarios adecuadamente](https://docs.google.com/presentation/d/1EXEiEz1d__aHQvAYcPFOiwzlRMunIsDUlJ4tMMYaFig/edit#slide=id.g351ee290dd_2_105).
La primera línea debe ser descriptiva pero no debe tener más de 50 caractéres.
En la siguientes líneas se puede profundizar con más detalle en lo que se ha hecho.

 1. Modifica `README.md` usando [Markdown](https://guides.github.com/features/mastering-markdown/) para:
    1. Explicar cómo compilar y probar el proyecto, incluyendo requisitos adicionales, si los hubiera.
    2. Comentar las características implementadas, opcionales y bugs conocidos.

    No te olvides de hacer un _commit_ en `develop` para preservar los cambios en README.md.

## Para entregar la actividad

Cuando hayas terminado y estés preparado para entregar la actividad o cuando quieras _feedback_ del profesor:

 1. [Sube](http://git.github.io/git-reference/#push) todos los cambios de tu rama `develop` al repositorio `origin` en GitHub.
 2. En la interfaz web de GitHub, crea un [pull request](https://help.github.com/articles/creating-a-pull-request) de
 `develop` a `master` para notificar al profesor.
 
En el título del _pull request_ intenta usar [Feedback] o [Entrega] como prefijo para que podamos identificar rápidamente las consultas cuando nos llegue la notificación al correo y así responderlas lo antes posible.
