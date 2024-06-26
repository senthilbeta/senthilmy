#! /bin/bash

echo "hello world"

echo our shell name is :$BASH
echo our shell version is :$BASH_VERSION
echo our home directory is :$HOME
echo our current working directory is :$PWD

name1=mark

echo the mark is $name1

echo "enter the name: "
read name
echo "hello $name , welcome to scripting world.."

read -p "username :" user_name
read -sp "password :" pass_word
echo  
echo "username : $user_name"
echo "password : $pass_word" 

read -a names
echo "names: ${names[0]}, ${names[1]}"
