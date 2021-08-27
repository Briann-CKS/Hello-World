#!/bin/bash

git add .

git commit -m "Updated files"

git status

git log --oneline

git push -u origin master

git status
