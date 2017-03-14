//Cell.h
/** @brief Constructor dari Cell
  * Menghidupkan cell
  *
  * @param I Indices adalah alamat dimana cell dihidupkan
  * @param Type integer adalah kode dari cell dimana 0=Habitat, 1=Facility
  * @param Code character adalah suatu huruf untuk merepresentasikan cell di layar.
  */
  
/** @brief Destructor dari Cell
  * Menghilangkan alokasi memori cell
  */
  
/** @brief Mengembalikan nilai character render dari objek Cell
  * Character ini nantinya yang siap di Print ke layar
  */
  
/** @brief Mengembalikan nilai Indices dimana cell berada
  */
    
/** @brief Mengembalikan nilai boolean apakah cell adalah habitat
  */

/** @brief Mengembalikan nilai boolean apakah cell adalah fasilitas
  */

/** @brief Mengembalikan nilai char Code yang adalah atribut cell
  */
  
/** @brief Attribut Koordinat yang adalah Indices letak cell
  */

/** @brief Attribut Type yang adalah type dari Cell
  */

/** @brief Attribut Code yang adalah code dari Cell
  */
  
---
  
//Habitat.h
/** @brief Constructor dari Habitat
  * Menghidupkan habitat
  *
  * @param I Indices adalah alamat dimana habitat dihidupkan
  * @param type integer adalah kode dari habitat dimana 0=Land, 1=Water, 2=Air
  * @param code character adalah suatu huruf untuk merepresentasikan habitat di layar.
  */
  
/** @brief Mengembalikan nilai boolean apakah habitat adalah land
  */

/** @brief Mengembalikan nilai boolean apakah habitat adalah water
  */

/** @brief Mengembalikan nilai boolean apakah habitat adalah air
  */

/** @brief Attribut Htype yang adalah type dari habitat
  */

---

//Facility.h
/** @brief Constructor dari Fasilitas
  * Menghidupkan fasilitas
  *
  * @param I Indices adalah alamat dimana fasilitas dihidupkan
  * @param type integer adalah kode dari fasilitas dimana 0=Road, 1=Park, 2=Restaurant
  * @param code character adalah suatu huruf untuk merepresentasikan fasilitas di layar.
  */
  
/** @brief Mengembalikan nilai boolean apakah fasilitas adalah road
  */

/** @brief Mengembalikan nilai boolean apakah fasilitas adalah park
  */

/** @brief Mengembalikan nilai boolean apakah fasilitas adalah restaurant
  */

/** @brief Attribut Ftype yang adalah type dari fasilitas
  */

---
  
//AirHabitat.h
/** @brief Constructor dari Air Habitat
  * Menghidupkan habitat udara
  *
  * @param I Indices adalah alamat dimana habitat dihidupkan
  */
  
/** @brief Mengembalikan nilai character kode dari objek Air Habitat
  * Character ini nantinya yang siap di Print ke layar
  */

---
  
//WaterHabitat.h
/** @brief Constructor dari Water Habitat
  * Menghidupkan habitat air
  *
  * @param I Indices adalah alamat dimana habitat dihidupkan
  */
  
/** @brief Mengembalikan nilai character kode dari objek Water Habitat
  * Character ini nantinya yang siap di Print ke layar
  */

---
  
//LandHabitat.h
/** @brief Constructor dari Land Habitat
  * Menghidupkan habitat darat
  *
  * @param I Indices adalah alamat dimana habitat dihidupkan
  */
  
/** @brief Mengembalikan nilai character kode dari objek Land Habitat
  * Character ini nantinya yang siap di Print ke layar
  */

---
  
//Restaurant.h
/** @brief Constructor dari Restaurant
  * Menghidupkan fasilitas restauran
  *
  * @param I Indices adalah alamat dimana fasilitas dihidupkan
  */
  
/** @brief Mengembalikan nilai character kode dari objek Restaurant
  * Character ini nantinya yang siap di Print ke layar
  */

---
  
//Road.h
/** @brief Constructor dari Road
  * Menghidupkan fasilitas jalan
  *
  * @param I Indices adalah alamat dimana fasilitas dihidupkan
  */
  
/** @brief Mengembalikan nilai character kode dari objek Road
  * Character ini nantinya yang siap di Print ke layar
  */

---
  
//Park.h
/** @brief Constructor dari Park
  * Menghidupkan fasilitas taman
  *
  * @param I Indices adalah alamat dimana fasilitas dihidupkan
  */
  
/** @brief Mengembalikan nilai character kode dari objek Park
  * Character ini nantinya yang siap di Print ke layar
  */
  
