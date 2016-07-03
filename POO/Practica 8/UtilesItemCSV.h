/* 
 * File:   UtilesItemCSV.h
 * Author: admin
 *
 * Created on 23 de abril de 2015, 16:18
 */

#ifndef UTILESITEMCSV_H
#define	UTILESITEMCSV_H

#include "itemCSV.h"
#include <string>

namespace UtilesItemCSV {
    void AlmacenaObjetosCSV(itemCSV **v, int numObjs, std::string nomArchivo);
    int RecuperaObjetosCSV(itemCSV **v, int tamV, std::string nomArchivo);
    void AlmacenaObjetosCSV2(itemCSV **v, int numObjs, std::string nomArchivo);
};

#endif	/* UTILESITEMCSV_H */

