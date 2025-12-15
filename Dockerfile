FROM alpine:latest

RUN apk add --no-cache g++

WORKDIR /app

COPY . .

RUN g++ check.cpp -o app

CMD ["./app"]
