
python setup.py install
sudo pip install -U pip
sudo pip install -U virtualenv
sudo virtualenv -p python3 myenv
sudo virtualenv -p python myenv
source myenv/bin/activate
sudo pip install django==1.9
django-admin.py startproject mysite .
sudo python3.6 manage.py migrate
sudo python3.6 manage.py runserver
sudo python3.6 manage.py startapp blog
sudo python3.6 manage.py makemigrations blog
sudo python3.6 manage.py migrate
sudo python3.6 manage.py createsuperuser
sudo yum install git
git init
git config user.name "mike"


