//Zoo.h
/** @brief Constructor dari Zoo
  * Menghidupkan kebun binatang
  */

/** @brief Destructor dari Zoo
  * Menghilangkan alokasi memori Zoo
  */
  
/** @brief Prosedur Move
  * I.S Semua elemen dalam kebun binatang telah dihidupkan
  * F.S Semua Animals dalam berpindah tempat
  * Menggerakkan hewan yang ada didalam kebun binatang
  */ 

/** @brief Prosedur Print
  * I.S Zoo telah hidup
  * F.S Semua elemen zoo tercetak pada layar
  * Mencetak kebun binatang beserta seluruh elemennya ke layar
  */ 
  
/** @brief Prosedur Hitung Makanan
  * I.S Zoo telah hidup
  * F.S Jumlah makanan yang dibutuhkan kebun binatang setiap harinya tercetak di layar
  * Mengkalkulasikan jumlah makanan yang diperlukan hewan-hewan yang hidup di kebun binatang
  * Mencetak hasil kalkulasi jumlah makanan ke layar
  */

/** @brief Attribut Map adalah Matriks of Pointer to Cell
  */

/** @brief Attribut DaftarKandang adalah Array of Cage yang dimiliki kebun binatang
  */

/** @brief Attribut Lebar adalah lebar dari kebun binatang
  */
  
/** @brief Attribut Panjang adalah panjang dari kebun binatang
  */

/** @brief Attribut BykKandang adalah banyaknya kandang yang ada di kebun binatang
  */

/** @brief Attribut ready_to_print adalah Matriks of character kebun binatang yang siap di print ke layar (sudah ada hewan)
  */
  
/** @brief Attribut base_map adalah Matriks of character kebun binatang hasil render habitat (belum ada hewan)
  */
  
//Cage.h
/** @brief Constructor tanpa parameter dari Cage
  * Menghidupkan kandang
  */

/** @brief Constructor dengan parameter dari Cage
  * Menghidupkan kandang sesuai dengan input parameter
  *
  * @param I array of Indices menyatakan Cell dengan indices mana saja yang tergabung dalam cage
  * @param Neff integer menyatakan banyaknya Indices yang ada pada array
  */
 
 /** @brief Operator overloading = dari Cage
   * Memastikan bukan bitewise copy
   *
   * @param C menyatakan Cage yang ingin disalin   */
   
/** @brief Destructor dari Cage
  * Menghilangkan alokasi memori Cage
  */
  
/** @brief  Mengembalikan nilai boolean apakah indices termasuk pada cangkupan cage
  *
  * @param I adalah indices yang diperiksa sebagai bagian dari cage
  */
  
/** @brief Mengembalikan nilai boolean apakah masih ada ruang untuk animal di cage tersebut
  */

/** @brief Prosedur AddAnimal dari Cage
  * I.S Cage telah hidup dan Masukkan terdefinisi sebagai hewan yang hidup
  * F.S Animal A tercatat pada Data Animals Cage
  * Menambahkan Animals A pada Data Animals Cage
  *
  * @param A adalah Pointer to Animals yang ingin dimasukkan di Data Animals
  */
 
 /** @brief Prosedur Inter dari Cage
   * I.S Cage terdefinisi
   * F.S Memanggil semua prosedur interact dari animals yang ada di Cage
   * Mencetak semua suara binatang yang ada dalam kandang
  */

/** @brief Mengembalikan nilai boolean apakah animals tinggal di kandang tersebut
  * 
  * @param A adalah Pointer to Animals yang diperiksa
  */

/** @brief Mengembalikan nilai atribut DataAnimals
  * 
  */

/** @brief GetLuas dari cage
  * Mengembalikan nilai luas suatu kandang
  * 
  */

/** @brief GetBanyakHewan dari Cage
  * Mengembalikan nilai banyaknya hewan yang ada di suatu kandang
  */
  
//Indices.h
/** @brief Constructor tanpa parameter dari Indices
  * Menghidupkan indeks
  */
  
/** @brief Constructor dengan parameter dari Indices
  * Menghidupkan indeks sesuai parameter
  *
  * @param x integer adalah absis yang akan di set
  * @param y integer adalah ordinat yang akan di set
  */
  
/** @brief Copy Constructor dari Indices
  * Menghidupkan indeks dengan atribut yang sama seperti indeks yang lain
  */
  
 /** @brief Operator overloading = dari Indices
   * Memastikan bukan bitewise copy
   *
   * @param I menyatakan Indices yang ingin disalin   */

/** @brief GetAbsis dari Indices
  * Mengembalikan nilai absis dari indeks
  *
  */

/** @brief GetOrdinat dari Indices
  * Mengembalikan nilai ordinat dari indeks
  *
  */
  
/** @brief Prosedur SetAbsis dari Indices
  * I.S Indices sudah hidup dan masukan terdefinisi
  * F.S Absis indices nilai menjadi masukan
  *
  * @param x integer adalah nilai absis yang akan di set
  */
  
/** @brief Prosedur SetOrdinat dari Indices
  * I.S Indices sudah hidup dan masukan terdefinisi
  * F.S Ordinat indices nilai menjadi masukan
  *
  * @param y integer adalah nilai ordinat yang akan di set
  */
  
/** @brief Mengembalikan nilai boolean apakah Indices masukan sama dengan current objek
  *
  * @param I Indices yang ingin dibandingkan dengan current objek
  */

/** @brief Attribut x adalah nilai absis indeks
  */
  
/** @brief Attribut y adalah nilai ordinat indeks
  */
