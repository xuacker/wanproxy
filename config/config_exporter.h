#ifndef	CONFIG_EXPORTER_H
#define	CONFIG_EXPORTER_H

class ConfigClass;
class ConfigObject;
class ConfigValue;

class ConfigExporter {
protected:
	ConfigExporter(void)
	{ }
	
	~ConfigExporter()
	{ }

public:
	virtual void field(const ConfigValue *, const std::string&) = 0;
	virtual void object(const ConfigClass *, const ConfigObject *) = 0;
	virtual void value(const ConfigValue *, const std::string&) = 0;
};

#endif /* !CONFIG_EXPORTER_H */
