# LIBFT 🐢

![Build Status](https://img.shields.io/badge/build-passing-brightgreen)
![Project](https://img.shields.io/badge/beldemir/-libft-green)

## Your first library. / Sizin yazacağınız ilk kütüphane.

<img align="left" width="150" style="max-width: 100%; height: auto; margin-right: 20px;" src="https://github.com/berkeldemir/libft/blob/main/srcs/screenshot.png" alt="Libft Image">

**EN:** In this project of 42 Cursus, you will create your own library. And instead of creating them again and again in the future, you will be able to use them by basically adding libft to your project root.

**TR:** 42 Ana Müfredatın ilk projesi olan libft'de kendi kütüphanenizi oluşturacaksınız. Ve daha sonra yazacağınız projelerde, her bir fonksiyonu tek tek baştan yazmak yerine libft'yi projenize ekleyerek kolayca kullanabilir hale geleceksiniz.

**---------------------**
<br clear="left"/>
<br>
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
| :----------------- | :---------------------------------- | :---------------------------------------------|
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
| (B) ft_lstsize     | Return the size of list             | Listedeki node sayısını döndür                |
| ft_memchr          | Search n bytes for c int the memory | Hafızada n bayt boyunca 'c' karakterini ara   | 
| ft_memcmp          | Compare n bytes of *s1 and *s2      | *s1 ve *s2 tan itibaren n baytı karşılaştır   |
| ft_memcpy          | Copy n bytes from *src to *dst      | *src'den *dst'ye n bayt kopyala               |
| ft_memmove         | Copy n bytes from *src to *dst (1)  | *src'den *dst'ye n bayt kopyala (1)           |
| ft_memset          | Set len bytes of *b to c            | *b'den itibaren len byte'ı c olarak ayarla    | 
| ft_puthcar_fd      | Print given c to file descriptor (2)| File descriptor'a (fd) c karakteri yazdır. (2)|
| ft_putendl_fd      | Print s string + \n to fd.          | File desc.'a (fd) s stringi + \n yazdır       |
| ft_putnbr_fd       | Print given integer n to fd.        | Verilen n integerı'nı fd'ye yazdır            |
| ft_putstr_fd       | Print given string s to fd.         | Verilen s stringi'ni fd'ye yazdır             |
| ft_split           | (3)                                 | (3)                                           |
| ft_strchr          | Search for c int in s string        | s stringi'nde c integerı'nı ara               |
| ft_strdup          | Duplicate given string and ret. new | Verilen stringi kopyala ve yenisi döndür      |
| ft_striteri        | Apply f to any char of str ret. same| Her karaktere f fonk uygula, eskisini döndür  |
| ft_strjoin         | Fuse two strings, return new        | İki stringi ucuca ekle, yenisini döndür       |
| ft_strlcat         | Copy src right next to dst (4)      | src'yi dst'nin hemen sağına kopyala (4)       |
| ft_strlcpy         | Copy size bytes of src to dest      | src'nin size bayt kadarını dest'e kopyala     |
| ft_strlen          | Return lengt of given string        | Verilen stringin uzunluğunu döndür            |
| ft_strmapi         | Apply f to any char of str ret. new | Her karaktere f fonk uygula, yenisini döndür  |
| ft_strncmp         | Compare n bytes of s1 and s2 strs   | s1 ve s2 stringlerinin n baytını karşılaştır  |
| ft_strnstr         | Search for s2 in s1 for len bytes   | len bayt boyunca s1'in içinde s2 ara          |
| ft_strrchr         | ft_strchr but return the last one   | ft_strchr ama bulunan son char'ı döndür       |
| ft_strtrim         | (5)                                 | (5)                                           |
| ft_substr          | (6)                                 | (6)                                           |
| ft_tolower         | Convert lowercase if it is upp.     | Büyük harf ise küçük harfe çevir              |
| ft_toupper         | Convert uppercase if it is lowc.    | Küçük harf ise büyük harfe çevir              |
| libft.h            | Define all functs and t_list there  | Bütün fonksiyonları ve t_list'i tanımlayın    |
| Makefile           | Easier way to create and archive    | Arşiv dosyası oluşturmanın kolay yolu         |

**(B)**: Bonus Functions <br>

**(1)**: ft_memmove function works more tidious then ft_memcpy to do not loose any data. (Please check 'Hints' 1st) <br>
**(1)**: ft_memmove fonksiyonu ft_memcpy'ye kıyasla data kaybetmemek konusunda daha titiz çalışır. ('İpucuları' 1'i inceleyin) <br> <br>
**(2)**: To learn more about File Descriptors (fd's) check out Hinst 2nd. <br>
**(2)**: File Descriptor'lar (fd'ler) hakkında daha fazla bilgi için İpucuları 2'yi inceleyin. <br> <br>
**(3)**: Split the given string s whenever you see the 'c' character and return an array of strings you've splitted. <br>
**(3)**: Verilen string'i 'c' karakterlerinin olduğu yerlerden ayır ve bu ayırdığın stringlerden oluşan bir string dizisi döndür. <br> <br>
**(4)**: dstsize must be given greater than strlen(src) otherwise original and also implementation of mine crushes as it should. And check 'man strlcat' to see return values. <br>
**(4)**: dstsize verilen src'den büyük uzunlukta olmalıdır, aksi taktirde orijinal fonksiyon ve uyarlamam olması gerektiği gibi çökecektir. Döndürülmesi gereken değerleri görmek için 'man strlcat' kullanın. <br> <br>
**(5)**: It has two parameters, first one the string to trim and the other one: array of chars will be trimming. Returns a new string which is trimmed from start and end. <br>
**(5)**: İki parametre alır, ilki kırpılacak string, diğeri kırpılacak karakterler dizisi. Baştan ve sondan bu değerlerle kırpılmış yeni diziyi döndürür. <br> <br>
**(6)**: It has three parameters, main string, start index, new length. Start from 'start' index and return a new string 'len + 1 (\0)' lenght. <br>
**(6)**: Üç parametre alır, ana string, başlangıç indexi, yeni uzunluk. 'start' indexinden başlayarak 'len + 1 (\0)' uzunluğunda yeni bir string döndürür. <br> <br>


## Hints / İpucuları

<strong>1. ft_memmove VS ft_memcpy</strong>
| E | C | O | L | E | _ | 4 | 2 | \0 |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:--:|
| 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 |  8 |
| ^ |   |   | ^ |   |   |   |   |    | 
| s1|   |   | s2|   |   |   |   |    |

```c
ft_memcpy(s2, s1, 5);
```
When we apply the code above, what we want to do? <br>
We want to copy 'ECOLE' to where says 'LE_42' <br>
Let's go step by step, first: <br>
'E' is overwrited on 'L' -> 'ECOEE_42' <br>
'C' -> 'E' -> "ECOEC_42" <br>
'O' -> '_' -> "ECOECO42" <br>
'L' -> '4' -> "ECO"... BUT WAIT 'L'? <br>
It is not 'L' anymore we overwrite 'E' into L. <br>
So yes, as you see we lost the value of 3rd index. <br>
<br>
What if we try it with **ft_memmove**?
```c
ft_memmove(s2, s1, 5);
```

|   E   |   C   |   O   |   L   |   E    |   _   |   4   |    2   |   \0   |
|:-----:|:-----:|:-----:|:-****:|:------:|:-----:|:-----:|:------:|:------:|
|   0   |   1   |   2   |   3   |   4    |   5   |   6   |    7   |    8   |
|   ^   |       |       |   ^   |   ^    |       |       |    ^   |        | 
|   s1  |       |       |   s2  | s1+len |       |       | s2+len |        |


   
3. File Descriptor (fd)

