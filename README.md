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
3. Run the server with the command:

```
make run
```
4. The server will be available in ``http://localhost:8383``

## Features
- Accepts GET & HEAD requests
- In the default path returns the `index.html`
- If the entered route not exists, return `404`
- If the request came with invalid method, return `405`

## Available status codes

> `200 (OK)`

> `404 (Not Found)`

> `405 (Method Not Allowed)`
