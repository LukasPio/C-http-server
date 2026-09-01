# HTTP Server em C

## Idioma / Language

- [Português (PT-BR)](#português-pt-br)
- [English](#english)

---

## Português (PT-BR)

### Índice

- [Sobre o projeto](#sobre-o-projeto)
- [Objetivos de aprendizado](#objetivos-de-aprendizado)
- [Escopo planejado](#escopo-planejado)
- [Fora do escopo](#fora-do-escopo)
- [Status](#status)
- [Estrutura do projeto](#estrutura-do-projeto)
- [Compilação](#compilação)
- [Observação sobre os commits](#observação-sobre-os-commits)
- [Aviso de segurança](#aviso-de-segurança)

### Sobre o projeto

Este projeto tem como objetivo implementar um servidor HTTP/1.1 em C utilizando sockets POSIX, sem bibliotecas HTTP externas.

O servidor deverá receber conexões TCP, interpretar requisições HTTP, realizar roteamento, servir arquivos estáticos, processar requisições `GET` e `POST` e enviar respostas HTTP válidas.

O foco principal **não é criar uma alternativa ao nginx, Apache ou outros servidores de produção**. Este é um projeto educacional voltado ao aprendizado prático de redes de computadores e programação low-level, implementando manualmente os componentes fundamentais de um servidor HTTP.

### Objetivos de aprendizado

- programação de redes e sockets TCP;
- funcionamento do protocolo HTTP/1.1;
- parsing de requisições e construção de respostas;
- gerenciamento manual de memória;
- manipulação de arquivos e descritores;
- concorrência e atendimento de múltiplas conexões;
- segurança básica em aplicações de rede;
- arquitetura modular em C;
- tratamento de erros e recursos do sistema operacional.

### Escopo planejado

- criação e configuração de sockets POSIX;
- associação a endereço e porta, escuta e aceitação de conexões TCP;
- parsing da linha de requisição, cabeçalhos e corpo;
- suporte aos métodos `GET` e `POST`;
- roteamento básico;
- entrega de arquivos estáticos;
- geração de respostas HTTP/1.1 e códigos de status;
- definição de tipos de conteúdo (`Content-Type`);
- tratamento de requisições inválidas;
- concorrência com mecanismos fornecidos pelo sistema operacional;
- limites de tamanho e validações básicas de segurança;
- encerramento correto de conexões e liberação de recursos.

### Fora do escopo

Inicialmente, o projeto não pretende oferecer todos os recursos exigidos de um servidor HTTP de produção, como HTTP/2 ou HTTP/3, TLS completo, proxy reverso, cache avançado, balanceamento de carga ou compatibilidade integral com todos os casos definidos pelas RFCs.

### Status

🚧 **Em desenvolvimento inicial.** A arquitetura e as funcionalidades serão implementadas de forma incremental à medida que os conceitos forem estudados.

### Estrutura do projeto

```text
.
├── Makefile
└── src/
    ├── http.c      # Parsing e estruturas relacionadas ao HTTP
    └── server.c    # Socket, servidor TCP e ciclo principal
```

A estrutura poderá mudar conforme novos módulos forem adicionados.

### Compilação

O projeto requer um ambiente compatível com POSIX, um compilador C (como GCC ou Clang) e `make`.

```bash
make compile
```

As instruções de execução serão adicionadas quando a interface de linha de comando e as opções do servidor estiverem definidas.

### Observação sobre os commits

As mensagens de commit deste projeto foram escritas com o auxílio de inteligência artificial. Por isso, elas podem não representar com total precisão as alterações realizadas e não devem ser consideradas uma fonte completamente confiável sobre o histórico do projeto.

> **Eu gosto de programar, não de escrever commits ou READMEs**

### Aviso de segurança

Este software é experimental e desenvolvido para fins educacionais. Não deve ser exposto à internet nem utilizado em ambientes de produção sem uma revisão de segurança adequada.

---

## English

### Table of contents

- [About the project](#about-the-project)
- [Learning goals](#learning-goals)
- [Planned scope](#planned-scope)
- [Out of scope](#out-of-scope)
- [Project status](#project-status)
- [Project structure](#project-structure)
- [Building](#building)
- [A note about the commits](#a-note-about-the-commits)
- [Security notice](#security-notice)

### About the project

This project aims to implement an HTTP/1.1 server in C using POSIX sockets and no external HTTP libraries.

The server is intended to accept TCP connections, parse HTTP requests, route requests, serve static files, handle `GET` and `POST` requests, and send valid HTTP responses.

The primary goal is **not to compete with nginx, Apache, or other production-grade servers**. This is an educational project focused on computer networking and low-level programming, with the fundamental parts of an HTTP server implemented manually.

### Learning goals

- network programming and TCP sockets;
- HTTP/1.1 protocol fundamentals;
- request parsing and response generation;
- manual memory management;
- file and file-descriptor handling;
- concurrency and multiple client connections;
- basic network application security;
- modular C architecture;
- error handling and operating-system resources.

### Planned scope

- POSIX socket creation and configuration;
- address binding, listening, and accepting TCP connections;
- request-line, header, and body parsing;
- `GET` and `POST` method support;
- basic routing;
- static file serving;
- HTTP/1.1 responses and status codes;
- content type (`Content-Type`) handling;
- malformed request handling;
- concurrency using operating-system facilities;
- basic security validation and size limits;
- proper connection shutdown and resource cleanup.

### Out of scope

At first, the project will not attempt to provide every feature expected from a production HTTP server, such as HTTP/2 or HTTP/3, complete TLS support, reverse proxying, advanced caching, load balancing, or full compatibility with every RFC edge case.

### Project status

🚧 **Early development.** The architecture and features will be implemented incrementally as the underlying concepts are explored.

### Project structure

```text
.
├── Makefile
└── src/
    ├── http.c      # HTTP parsing and related structures
    └── server.c    # Socket setup, TCP server, and main loop
```

The structure may change as new modules are introduced.

### Building

The project requires a POSIX-compatible environment, a C compiler (such as GCC or Clang), and `make`.

```bash
make compile
```

Run instructions will be added once the command-line interface and server options have been defined.

### A note about the commits

The commit messages in this project were written with the assistance of artificial intelligence. As a result, they may not describe every change with complete accuracy and should not be treated as a fully reliable account of the project's history.

> **Eu gosto de programar, não de escrever commits ou READMEs**
>
> *I like programming, not writing commits or READMEs.*

### Security notice

This software is experimental and intended for educational purposes. It should not be exposed to the internet or used in production without a proper security review.
