#!/bin/bash

#echo "Starting Git Backup"

#if cp -R /var/www/application CoderzWar-Online-Judge; then
	#echo "Application Folder Backup Successful\n"
#else
	#echo "Error Occured Application Folder Backup\n"
#fi

git add *
git commit -m "Update"
git push origin master
