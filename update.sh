printf "[\e[94mMASTERBALL\e[0m]$> \e[93mUpdate started...\e[0m\r"
git fetch origin
git reset --hard origin/master
printf "[\e[94mMASTERBALL\e[0m]$> \e[92mUpdate finished.        [DONE]\e[0m\n"
