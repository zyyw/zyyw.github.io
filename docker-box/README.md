start a nginx server, mapping host port 8001 to nginx 80
```bash
docker container run -it -p 8001:80 nginx
```

start a nginx server at the background:
```bash
docker container run -d -p 8001:80 --name syuNginx nginx
```

list active containers:
```bash
docker container ls
```

list all containers, including active ones and stopped ones:
```bash
docker container ls -a

docker ps
docker ps -a
```

remove docker container:
```bash
docker container rm <container id>
```

list all docker images:
```bash
docker images
```

delete a docker image:
```bash
docker image rm <image id>
```

ssh into docker container:
```bash
docker container exec -it myNginx bash
```

build an image based on a Dockerfile:
```bash
docker image build -t btraversy/nginx-website .
```

