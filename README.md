# LIBFT 🐢

![Build Status](https://img.shields.io/badge/build-passing-brightgreen)
![Project](https://img.shields.io/badge/beldemir/-libft-green)

## Your first library. | Sizin yazacağınız ilk kütüphane.

<img align="left" width="150" style="max-width: 100%; height: auto; margin-right: 20px;" src="https://github.com/berkeldemir/libft/blob/main/srcs/screenshot.png" alt="Libft Image">

**EN:** In this project of 42 Cursus, you will create your own library. And instead of creating them again and again in the future, you will be able to use them by basically adding libft to your project root.

**TR:** 42 Ana Müfredatın ilk projesi olan libft'de kendi kütüphanenizi oluşturacaksınız. Ve daha sonra yazacağınız projelerde, her bir fonksiyonu tek tek baştan yazmak yerine libft'yi projenize ekleyerek kolayca kullanabilir hale geleceksiniz.

**---------------------**
<br clear="left"/>

### <strong>Table of Contents<strong>
-  [Installation / Kurulum](#installation)
-  [Usage / Kullanım](#usage)
-  [Features / Özellikler](#features)
-  [Hints / İpucuları](#hints)
-  [About 42 / 42 Nedir?](#aboutft)
-  [License](#license)

<br> <br>
## Installation

**EN:** You can directly download as a ZIP from up there by clicking green <strong>'code'</strong> button. <br>
**TR:** Yukarıdaki yeşil renkli <strong>'code'</strong> bloğuna tıklayarak 'ZIP' formatında indirebilirsiniz.

## Usage

After installing, you can run the app with the following command:

```bash
make fclean 
make
make clean
```
**make fclean** : first you need to remove if libft.a already created. <br>
**make** : create ft_\*.o (! ft_lst\*.o) files and libft.a <br>
**make clean**  : remove *.o files, they've already added to libft.a

If you want to also run and check for bonuses: 

```bash
make fclean
make
make bonus
make clean
```
**make fclean** : first you need to remove if libft.a already created.
**make** : create ft_*.o (! ft_lst*.o) files and libft.a
**make bonus** : create ft_lst*.o files and add to libft.a
**make clean** : remove *.o files, they've already added to libft.a
