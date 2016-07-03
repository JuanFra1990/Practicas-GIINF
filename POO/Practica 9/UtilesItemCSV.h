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
#include <vector>

namespace UtilesItemCSV {
    void AlmacenaObjetosCSV(std::vector<itemCSV*> v, int numObjs, std::string nomArchivo);
    int RecuperaObjetosCSV(std::vector<itemCSV*> v, int tamV, std::string nomArchivo);
    void AlmacenaObjetosCSV2(std::vector<itemCSV*> v, int numObjs, std::string nomArchivo);
};

namespace Generalizacion {
    template <typename T>
    T mayorque(const std::vector<T> &v);
};

#endif	/* UTILESITEMCSV_H */

