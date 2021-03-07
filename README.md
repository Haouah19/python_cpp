# python_cpp
Exemple d'utilisation d'un composant en python
Utilise pybind11
apres git clone, faire:
```
cd python_cpp
git submodule init
git submodule update
```

Pour compiler

```
cd hello
make
```

Pour utiliser
```
python3
>>> import hello_component
>>> hello_component.greet()
'hello, world'
>>> hello_component.getVersion()
'1.0'
>>> 
```
# Autre Exemple d'utilisation d'un composant en python

Pour compiler

```
cd human
make
```
Pour utiliser
```
python3
>>> import human_component
>>> h = human_component.Human('Adonis')
>>> h.getName()
'Adonis'
>>> 
```
Trace d'exécution : <br/>

![alt text](https://github.com/Haouah19/python_cpp/blob/main/pics/Capture%20d%E2%80%99%C3%A9cran%202021-03-07%20%C3%A0%2022.22.10.png)
