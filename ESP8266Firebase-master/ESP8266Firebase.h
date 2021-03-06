/*
MIT License

Copyright (c) 2020 Rupak Poddar

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#ifndef ESP8266Firebase_h
#define ESP8266Firebase_h

#include "Arduino.h"

#define DEFAULT_FIREBASE_FINGERPRINT "03 D6 42 23 03 D1 0C 06 73 F7 E2 BD 29 47 13 C3 22 71 37 1B"

class Firebase
{
	public:
		Firebase(String projectID);
		Firebase(String projectID, const char* FIREBASE_FINGERPRINT);

		String setString(String link, String data);
		
		String setNum(String link, String data);
		String setInt(String link, int data);
		String setFloat(String link, float data);

		String pushString(String link, String data);

		String pushNum(String link, String data);
		String pushInt(String link, int data);
		String pushFloat(String link, float data);

		void getData(String link);
		String getString(String link);
		int getInt(String link);
		float getFloat(String link);

		String deleteData(String link);

		void json(bool json);

	private:
		String _host;
		const char* _FIREBASE_FINGERPRINT;
		bool _json = false;
		const int _httpsPort = 443;
		String _String;
		int _int;
		float _float;
	
};

#endif
