start a nginx server, mapping host port 8001 to nginx 80
docker container run -it -p 8001:80 nginx

start a nginx server at the background:
docker container run -d -p 8001:80 --name syuNginx nginx

list active containers:
docker container ls

list all containers, including active ones and stopped ones:
docker container ls -a

docker ps
docker ps -a

remove docker container:
docker container rm <container id>

list all docker images:
docker images

delete a docker image:
docker image rm <image id>

ssh into docker container:
docker container exec -it myNginx bash

build an image based on a Dockerfile:
docker image build -t btraversy/nginx-website .


