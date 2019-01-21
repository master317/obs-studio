#pragma once

#include <QObject>

class Auth : public QObject {
	Q_OBJECT

protected:
	virtual void SaveInternal()=0;
	virtual bool LoadInternal()=0;

	bool firstLoad = true;

public:
	virtual ~Auth() {}

	virtual const char *type() const=0;
	virtual void LoadUI() {}

	virtual void OnStreamConfig() {}

	static bool Load();
	static void Save();
};
