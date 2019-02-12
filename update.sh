printf "[\e[94mMASTERBALL\e[0m]$> \e[93mUpdate started...\e[0m\r"
git reset --hard HEAD
git checkout origin/master
git branch -D master
git checkout -b masterprintf "[\e[94mMASTERBALL\e[0m]$> \e[92mUpdate finished.        [DONE]\e[0m\n"
