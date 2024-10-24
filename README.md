# LIBFT 🐢

![Build Status](https://img.shields.io/badge/build-passing-brightgreen)
![Project](https://img.shields.io/badge/beldemir/-libft-green)

## Your first library. / Sizin yazacağınız ilk kütüphane.

<img align="left" width="150" style="max-width: 100%; height: auto; margin-right: 20px;" src="https://github.com/berkeldemir/libft/blob/main/srcs/screenshot.png" alt="Libft Image">

**EN:** In this project of 42 Cursus, you will create your own library. And instead of creating them again and again in the future, you will be able to use them by basically adding libft to your project root.

**TR:** 42 Ana Müfredatın ilk projesi olan libft'de kendi kütüphanenizi oluşturacaksınız. Ve daha sonra yazacağınız projelerde, her bir fonksiyonu tek tek baştan yazmak yerine libft'yi projenize ekleyerek kolayca kullanabilir hale geleceksiniz.

**---------------------**
<br clear="left"/>

### Table of Contents
-  [Installation / Kurulum](#installation)
-  [Usage / Kullanım](#usage)
-  [Features / Özellikler](#features)
-  [Hints / İpucuları](#hints)
-  [About 42 / 42 Nedir?](#aboutft)
-  [License](#license)

<br> <br>
## Installation / Kurulum

**EN:**  *You can directly download as a ZIP from up there by clicking green <strong>'code'</strong> button.* <br>
**TR:**  *Yukarıdaki yeşil renkli <strong>'code'</strong> bloğuna tıklayarak 'ZIP' formatında indirebilirsiniz.*

## Usage / Kullanım

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
**make fclean** : first you need to remove if libft.a already created. <br>
**make** : create ft_*.o (! ft_lst*.o) files and libft.a <br>
**make bonus** : create ft_lst*.o files and add to libft.a <br>
**make clean** : remove *.o files, they've already added to libft.a

## Features / Özellikler

| File / Dosya       | Description                         | Açıklama                                      |
| :----------------: | :---------------------------------: | :--------------------------------------------:|
| ft_atoi            | Convert ASCII to Integer            | ASCII değerini bir integer'e çevir            |
| ft_bzero           | Set n bytes to zero                 | n baytı sıfır olarak ayarla                   |
| ft_calloc          | Basically malloc, but W/b_zero      | Aslınca malloc, b_zero ile                    |
| ft_isalnum         | Alphabetic or Numeric ? return 1    | Alfabetik ya da numerik ise 1 döndür          |
| ft_isalpha         | Alphabetic ? return 1               | Alfabetik ise 1 döndür                        |
| ft_isascii         | ASCII Character ? return 1          | ASCII karakter ise 1 döndür                   |
| ft_isdigit         | Numeric ? return 1                  | Numerik ise 1 döndür                          | 
| ft_isprint         | Printable ? return 1                | Yazdırılabilir karakter ise 1 döndür          |
| ft_itoa            | Convert Integer to String           | Integer değerinden String oluştur             |
| (B) ft_lstaddback  | Put a node to end of the list       | Listenin sonuna bir node ekle                 |
| (B) ft_lstaddfront | Put a node to beggining of the list | Listenin başına bir node ekle                 |
| (B) ft_lstclear    | Clear any node from the list        | Listedeki bütün node'ları sil                 |
| (B) ft_lstdelone   | Remove a node in a list             | Listedeki bir node'u sil                      |
| (B) ft_lstiter     | Apply f funct any node (return new) | Listedeki her node'a f uygula, yenisini döndür|
| (B) ft_lstlast     | Return a pointer to the last node   | Listedeki son node'un adresini döndür         |
| (B) ft_lstmap      | Apply f funct any node (return same)| Listedeki her node'a f uygula, eskisini döndür|
| (B) ft_lstnew      | Create a new node module            | Yeni bir node elementi oluştur                |                
| (B) ft_lstsize     | Return the size of list             | Listedeki node sayısını döndür.               |
| ft_memchr          | Search n bytes for c int the memory | Hafızada n bayt boyunca 'c' karakterini ara   | 
| ft_memcmp          | Compare n bytes of s1 and s2        | *s1 ve *s2 tan itibaren n baytı karşılaştır   |



(B) = Bonus Functions
