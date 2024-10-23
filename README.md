# LIBFT 🐢

![Build Status](https://img.shields.io/badge/build-passing-brightgreen)
![Project](https://img.shields.io/badge/beldemir/-libft-green)

### Your first library.
### Sizin yazacağınız ilk kütüphane.

<div style="display: flex; align-items: center;">
    <!-- Image on the left -->
    <div style=flex-direction: row; flex: 0.5;">
        <img src="https://github.com/berkeldemir/libft/blob/main/srcs/screenshot.png" alt="Libft Image" style="max-width: 100%;">
    </div>
    <div style="flex-direction: row; flex: 0.5; padding-left: 20px;">
        <h3>Sizin yazacağınız ilk kütüphane.</h3>
        <p><strong>EN:</strong> In this project of 42 Cursus, you will create your own library. And instead of creating them again and again in the future, you will be able to use them by basically adding libft to your project root.</p>
        <p><strong>TR:</strong> 42 Ana Müfredatın ilk projesi olan libft'de kendi kütüphanenizi oluşturacaksınız. Ve daha sonra yazacağınız projelerde, her bir fonksiyonu tek tek baştan yazmak yerine libft'yi projenize ekleyerek kolayca kullanabilir hale geleceksiniz.</p>
    </div>
</div>


## Table of Contents
- [Installation](#installation)
- [Usage](#usage)
- [Features](#features)
- [Screenshots](#screenshots)
- [Roadmap](#roadmap)
- [Contributing](#contributing)
- [Dependencies](#dependencies)
- [License](#license)

## Installation

To get started with StudyHub, follow these steps to install the app locally:

1. Clone the repository:
    ```bash
    git clone https://github.com/your_username/studyhub-app.git
    ```
2. Navigate into the project directory:
    ```bash
    cd studyhub-app
    ```
3. Install dependencies:
    ```bash
    npm install
    ```

## Usage

After installing, you can run the app with the following command:

```bash
make
make
make clean
```
**make fclean** : first you need to remove if libft.a already created. <br>
**make** : create ft_*.o (! ft_lst*.o) files and libft.a <br>
**make clean**  : remove *.o files, they've already added to libft.a

If you want to also run and check for bonuses: 

```bash
make
make
make bonus
make clean
```
**make fclean** : first you need to remove if libft.a already created.
**make** : create ft_*.o (! ft_lst*.o) files and libft.a
**make bonus** : create ft_lst*.o files and add to libft.a
**make clean** : remove *.o files, they've already added to libft.a
