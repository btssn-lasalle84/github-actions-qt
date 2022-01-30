[![Make Qt](https://github.com/btssn-lasalle84/github-actions-qt/actions/workflows/make-qt.yml/badge.svg?branch=main)](https://github.com/btssn-lasalle84/github-actions-qt/actions/workflows/make-qt.yml)

# github-actions-qt

## install-qt-action

Il faut pouvoir installer Qt sur un _workflow_ de Github Actions : https://github.com/jurplel/install-qt-action

```yml
name: Make Qt

on:
  push:
    branches: [ main ]
  pull_request:
    branches: [ main ]

jobs:
  build:

    runs-on: ubuntu-latest

    steps:
    - uses: actions/checkout@v2

    - name: Install Qt
      uses: jurplel/install-qt-action@v2
      with:
        version: '5.12.8'
        host: 'linux'
        target: 'desktop'

    - name: Run qmake
      run: |
        cd src && qmake

    - name: Run make
      run: |
        cd src && make
```

## Voir aussi

Pour le C++ : https://github.com/btssn-lasalle84/github-actions-cpp

## Ressources

### aqtinstall

`aqtinstall` est un utilitaire au programme d'installation de Qt, à utiliser dans un environnement CI où une interface utilisateur interactive n'est pas utilisable, ou simplement en ligne de commande.

Il peut télécharger automatiquement des fichiers binaires, des documents et des sources Qt prédéfinis pour la cible spécifiée, lorsque les versions se trouvent sur des sites miroirs de téléchargement Qt.

Lien : https://github.com/miurahr/aqtinstall/

Getting Started : https://aqtinstall.readthedocs.io/en/latest/getting_started.html

Installation :

```sh
pip install -U pip
pip install aqtinstall
```

Versions disponibles :

```sh
aqt list-qt windows desktop
aqt list-qt linux desktop
5.9.0 5.9.1 5.9.2 5.9.3 5.9.4 5.9.5 5.9.6 5.9.7 5.9.8 5.9.9
5.10.0 5.10.1
5.11.0 5.11.1 5.11.2 5.11.3
5.12.0 5.12.1 5.12.2 5.12.3 5.12.4 5.12.5 5.12.6 5.12.7 5.12.8 5.12.9 5.12.10 5.12.11 5.12.12
5.13.0 5.13.1 5.13.2
5.14.0 5.14.1 5.14.2
5.15.0 5.15.1 5.15.2
6.0.0 6.0.1 6.0.2 6.0.3 6.0.4
6.1.0 6.1.1 6.1.2 6.1.3
6.2.0 6.2.1 6.2.2 6.2.3
6.3.0

aqt list-qt linux desktop --arch 5.12.8
gcc_64

aqt list-qt linux desktop --modules 5.12.8 gcc_64
debug_info qtcharts qtdatavis3d qtnetworkauth qtpurchasing qtscript qtvirtualkeyboard qtwebengine qtwebglplugin

aqt list-qt linux desktop --archives 5.12.8 gcc_64
icu qt qt3d qtbase qtcanvas3d qtconnectivity qtdeclarative qtgamepad qtgraphicaleffects qtimageformats qtlocation qtmultimedia qtquickcontrols qtquickcontrols2 qtremoteobjects qtscxml qtsensors qtserialbus qtserialport qtspeech qtsvg qttools qttranslations qtwayland qtwebchannel qtwebsockets qtwebview qtx11extras qtxmlpatterns
```

---
Thierry Vaira : **[tvaira(at)free(dot)fr](tvaira@free.fr)**
