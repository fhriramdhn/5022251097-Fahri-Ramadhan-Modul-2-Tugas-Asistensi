Pertama, pada fungsi read_matrix, semula parameternya ditulis int M[x][y]. Karena x dan y tidak pernah didefinisikan, maka kode tersebut akan error saat dikompilasi. Perbaikannya adalah menggunakan int M[N][N] karena ukuran matriks sudah jelas ditentukan lewat #define N 3. Selain itu, format spesifier scanf yang digunakan sebelumnya adalah %lf, padahal tipe data matriks yang kamu deklarasikan adalah int. %lf dipakai untuk double, sehingga harus diganti menjadi %d agar sesuai dengan tipe data integer.

Kedua, pada bagian perulangan di read_matrix, ada kesalahan penulisan variabel indeks. Kamu menulis for (int j = 0; k < N; j++), padahal seharusnya variabel kondisi adalah j < N bukan k < N. Kesalahan kecil seperti ini akan membuat loop tidak berfungsi dan bisa menimbulkan error kompilasi. Perbaikannya adalah dengan mengganti k < N menjadi j < N.

Ketiga, di dalam fungsi multiply, variabel sum digunakan untuk menampung hasil perkalian elemen matriks, tetapi di kode awal tidak ada deklarasi untuk variabel tersebut. Akibatnya, program tidak akan mengenali sum. Solusinya adalah menambahkan deklarasi int sum; di dalam fungsi sebelum digunakan. Dengan begitu, sum bisa diinisialisasi ulang menjadi nol di setiap iterasi j.

Keempat, pada fungsi print_matrix, format output awal adalah %c, yang berarti karakter ASCII. Hal ini akan membuat hasilnya aneh, karena bilangan bulat matriks akan ditampilkan sebagai karakter. Perbaikannya adalah mengganti menjadi %d sehingga output yang ditampilkan benar-benar berupa angka.

Terakhir, di dalam fungsi main, setelah pemanggilan read_matrix(B) ada tanda titik koma (;) yang hilang. Tanpa tanda titik koma ini, program akan error saat dikompilasi. Dengan menambahkan tanda tersebut, program bisa berjalan normal.
