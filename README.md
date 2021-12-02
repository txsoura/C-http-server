# C HTTP Server
This is a simple HTTP server written in C using sockets. 

## Installation
 Follow the steps bellow, to install:

1.  Install `make`

> If you are in a linux distribution OS, this step is not needed

2. In the project folder, run the command bellow, to install:

```bash
make
```

or

```bash
make install
```
4.Run the server with the command:

```
make run
```
5. The server will be available in ``http://localhost:8383``

## Features
- Accepts GET & HEAD requests
- In the default path returns the `index.html`

## Available status codes

> `200 (OK)`

> `400 (Bad Request)`

> `404 (Not Found)`
