# C HTTP Server
This is a simple HTTP server written in C using sockets. 

## Installation
 Follow the steps bellow, to install:

1.  Install `make`

> If you are in a linux distribution OS, this step is not needed

2. In the project folder, run the command:

```bash
make
```
4.Run the server with :

```
./http-server
```
5. The server will be available in ``http://localhost:8000``

## Features
- Accepts GET & HEAD requests
- In the default path returns the `index.html`

## Available status codes

> `200 (OK)`

> `400 (Bad Request)`

> `404 (Not Found)`
