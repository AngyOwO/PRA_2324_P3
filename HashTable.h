#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <ostream>
#include <stdexcept>
#include "Dict.h"
#include "TableEntry.h"

#include "/home/alumno.upv.es/aespcor/W/PRA/Practica3/PRA_2324_P3/"

using namespace std;

template <typename V>
class HashTable: public Dict<V> {

	private:

		/*-------------------------------------------------*/
                /*                       n                         */
                /*-------------------------------------------------*/
                /*                                                 */
                /* DESCRIPCION:                                    */
                /* Numero de elementos almacenados actualmente en  */
                /* la tabla hash.                                  */
                /*                                                 */
                /*-------------------------------------------------*/

		int n;


		/*-------------------------------------------------*/
                /*                      max                        */
                /*-------------------------------------------------*/
                /*                                                 */
                /* DESCRIPCION:                                    */
                /* Tamaño de la tabla hash (numero total de        */
                /* cubetas).                                       */
                /*                                                 */
                /*-------------------------------------------------*/

		int max;


		/*-------------------------------------------------*/
                /*                   TableEntry                    */
                /*-------------------------------------------------*/
                /*                                                 */
                /* DESCRIPCION:                                    */
                /* Tabla de cubetas, representada por un array de  */
                /* punteros a listas enlazadas (tipo ListLinked<T>)*/
		/* que almacenan pares clave->valor,		   */
		/* (tipo TableEntry<V>).			   */
		/*                                                 */
                /*-------------------------------------------------*/

		ListLinked<TableEntry<V>> *table;


		/*-------------------------------------------------*/
                /*                       h                         */
                /*-------------------------------------------------*/
                /*                                                 */
                /* DESCRIPCION:                                    */
                /* Funcion hash que devuelve la posición (cubeta)  */
                /* en la table hash de key. Se calculara como el   */
                /* resto de la division entre la suma de los       */
                /* valores ASCII numericos de los caracteres de la */
		/* clave y el tamaño de la tabla hash.		   */
                /*                                                 */
                /*-------------------------------------------------*/

		int h(string key) {
		}

	public:

		/*-------------------------------------------------*/
                /*                   HashTable                     */
                /*-------------------------------------------------*/
                /*                                                 */
                /* DESCRIPCION:                                    */
                /* Metodo constructor. Reservara memoria dinamica  */
                /* para crear una tabla "table" de tamaño size, e  */
		/* inicializara los atributos n y max de la clase. */
                /*                                                 */
                /*-------------------------------------------------*/

		HastTable(int size) {
		}


		/*-------------------------------------------------*/
                /*                  ~HashTable                     */
                /*-------------------------------------------------*/
                /*                                                 */
                /* DESCRIPCION:                                    */
                /* Metodo destructor. Se encargara de liberar la   */
                /* memoria dinamica reservada al crear la tabla    */
                /* "table".                                        */
                /*                                                 */
                /*-------------------------------------------------*/

		~HashTable() {
		}


		/*-------------------------------------------------*/
                /*                   capacity                      */
                /*-------------------------------------------------*/
                /*                                                 */
                /* DESCRIPCION:                                    */
                /* Devuelve el numero total de cubetas de la tabla.*/
                /*                                                 */
                /*-------------------------------------------------*/

		int capacity() {
		}

		friend ostream &operator<<(ostream &out, const HashTable<V> &th) {
		}

		V operator[](string key) {
		}



};

#endif
