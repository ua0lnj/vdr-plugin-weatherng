/*
 *  $Id: parsing.h,v 1.2 2005/01/18 08:46:02 boonkerz Exp $
 */

#ifndef __PARSING_H
#define __PARSING_H

#include "xml.h"
#include <vdr/tools.h>
#include <stdio.h>
#include <vector>
#include <string>
#include "getdata.h"


class cxmlParse {
public:
	//bool xCharData(const std::string &text);
	//bool xEndElem(const std::string &name);
	//bool xStartElem(const std::string &name, std::map<std::string, std::string> &attrs);
	//static	std::vector<std::string> context;
	void xmlParse(int daycount, std::string DataDir,int inDPart);
	std::string parameter[6][5];
	std::string dayname,date,ort,sunrise,sunset,hi,low,wetter,icon,winddir,windspeed,humidity,raindown;
};
 	bool xCharData(const std::string &text);
        bool xEndElem(const std::string &name);
        bool xStartElem(const std::string &name, std::map<std::string, std::string> &attrs);
        	
#endif //__PARSING_H
