/*
 * This file is part of OpenModelica.
 *
 * Copyright (c) 1998-2014, Open Source Modelica Consortium (OSMC),
 * c/o Linköpings universitet, Department of Computer and Information Science,
 * SE-58183 Linköping, Sweden.
 *
 * All rights reserved.
 *
 * THIS PROGRAM IS PROVIDED UNDER THE TERMS OF GPL VERSION 3 LICENSE OR
 * THIS OSMC PUBLIC LICENSE (OSMC-PL) VERSION 1.2.
 * ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS PROGRAM CONSTITUTES
 * RECIPIENT'S ACCEPTANCE OF THE OSMC PUBLIC LICENSE OR THE GPL VERSION 3,
 * ACCORDING TO RECIPIENTS CHOICE.
 *
 * The OpenModelica software and the Open Source Modelica
 * Consortium (OSMC) Public License (OSMC-PL) are obtained
 * from OSMC, either from the above address,
 * from the URLs: http://www.ida.liu.se/projects/OpenModelica or
 * http://www.openmodelica.org, and in the OpenModelica distribution.
 * GNU version 3 is obtained from: http://www.gnu.org/copyleft/gpl.html.
 *
 * This program is distributed WITHOUT ANY WARRANTY; without
 * even the implied warranty of  MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE, EXCEPT AS EXPRESSLY SET FORTH
 * IN THE BY RECIPIENT SELECTED SUBSIDIARY LICENSE CONDITIONS OF OSMC-PL.
 *
 * See the full OSMC Public License conditions for more details.
 *
 */
/*
 *
 * @author Adeel Asghar <adeel.asghar@liu.se>
 *
 * RCS: $Id$
 *
 */

#ifndef HELPER_H
#define HELPER_H

#include <stdlib.h>
#include <QString>
#include <QSize>
#include <QObject>
#include <QFontInfo>
#include <QSettings>

class Helper : public QObject
{
  Q_OBJECT
public:
  static void initHelperVariables();
  /* Global non-translated variables */
  static QString applicationName;
  static QString applicationIntroText;
  static QString organization;
  static QString application;
  static QString OpenModelicaVersion;
  static QString OpenModelicaHome;
  static QString OpenModelicaLibrary;
  static QString OMCServerName;
  static QString omFileTypes;
  static QString omnotebookFileTypes;
  static QString ngspiceNetlistFileTypes;
  static QString imageFileTypes;
  static QString bitmapFileTypes;
  static QString fmuFileTypes;
  static QString xmlFileTypes;
  static QString infoXmlFileTypes;
  static QString matFileTypes;
  static QString omResultFileTypes;
  static QString exeFileTypes;
  static QString txtFileTypes;
  static QString figaroFileTypes;
  static int treeIndentation;
  static QSize iconSize;
  static QSize buttonIconSize;
  static int tabWidth;
  static QString modelicaComponentFormat;
  static QString modelicaFileFormat;
  static qreal shapesStrokeWidth;
  static int headingFontSize;
  static QString ModelicaSimulationOutputFormats;
  static QString clockOptions;
  static QString notificationLevel;
  static QString warningLevel;
  static QString errorLevel;
  static QString syntaxKind;
  static QString grammarKind;
  static QString translationKind;
  static QString symbolicKind;
  static QString simulationKind;
  static QString scriptingKind;
  static QString tabbed;
  static QString subWindow;
  static QString structuredOutput;
  static QString textOutput;
  static QString utf8;
  static QFontInfo systemFontInfo;
  static QFontInfo monospacedFontInfo;
  static QString toolsOptionsPath;
  static QString toolsOptionsPathMAC;
  /* Meta Modelica Types */
  static QString MODELICA_METATYPE;
  static QString MODELICA_STRING;
  static QString MODELICA_BOOLEAN;
  static QString MODELICA_INETGER;
  static QString MODELICA_REAL;
  static QString REPLACEABLE_TYPE_ANY;
  static QString RECORD;
  static QString LIST;
  static QString OPTION;
  static QString TUPLE;
  static QString ARRAY;
  static QString VALUE_OPTIMIZED_OUT;
  /* Modelica Types */
  static QString STRING;
  static QString BOOLEAN;
  static QString INTEGER;
  static QString REAL;
  /* Global translated variables */
  static QString newModelicaClass;
  static QString createNewModelicaClass;
  static QString openModelicaFiles;
  static QString openConvertModelicaFiles;
  static QString libraries;
  static QString clearRecentFiles;
  static QString encoding;
  static QString file;
  static QString browse;
  static QString ok;
  static QString cancel;
  static QString close;
  static QString error;
  static QString chooseFile;
  static QString chooseFiles;
  static QString attributes;
  static QString properties;
  static QString add;
  static QString edit;
  static QString save;
  static QString saveTip;
  static QString saveAs;
  static QString saveAsTip;
  static QString saveTotal;
  static QString saveTotalTip;
  static QString apply;
  static QString chooseDirectory;
  static QString general;
  static QString output;
  static QString parameters;
  static QString name;
  static QString comment;
  static QString path;
  static QString type;
  static QString information;
  static QString rename;
  static QString checkModel;
  static QString checkModelTip;
  static QString checkAllModels;
  static QString checkAllModelsTip;
  static QString instantiateModel;
  static QString instantiateModelTip;
  static QString exportFMU;
  static QString exportFMUTip;
  static QString importFMU;
  static QString importFMUTip;
  static QString exportXML;
  static QString exportXMLTip;
  static QString exportToOMNotebook;
  static QString exportToOMNotebookTip;
  static QString importFromOMNotebook;
  static QString importNgspiceNetlist;
  static QString importFromOMNotebookTip;
  static QString importNgspiceNetlistTip;
  static QString line;
  static QString exportAsImage;
  static QString exportAsImageTip;
  static QString exportFigaro;
  static QString exportFigaroTip;
  static QString OpenModelicaCompilerCLI;
  static QString deleteStr;
  static QString copy;
  static QString paste;
  static QString loading;
  static QString question;
  static QString search;
  static QString duplicate;
  static QString duplicateTip;
  static QString unloadClass;
  static QString unloadClassTip;
  static QString unloadTLMOrTextTip;
  static QString refresh;
  static QString simulate;
  static QString simulateTip;
  static QString reSimulate;
  static QString reSimulateTip;
  static QString reSimulateSetup;
  static QString reSimulateSetupTip;
  static QString simulateWithTransformationalDebugger;
  static QString simulateWithTransformationalDebuggerTip;
  static QString simulateWithAlgorithmicDebugger;
  static QString simulateWithAlgorithmicDebuggerTip;
  static QString simulationSetup;
  static QString simulationSetupTip;
  static QString simulation;
  static QString reSimulation;
  static QString interactiveSimulation;
  static QString options;
  static QString extent;
  static QString bottom;
  static QString top;
  static QString grid;
  static QString horizontal;
  static QString vertical;
  static QString component;
  static QString scaleFactor;
  static QString preserveAspectRatio;
  static QString originX;
  static QString originY;
  static QString rotation;
  static QString thickness;
  static QString smooth;
  static QString bezier;
  static QString startArrow;
  static QString endArrow;
  static QString arrowSize;
  static QString size;
  static QString lineStyle;
  static QString color;
  static QString fontAndColors;
  static QString fontFamily;
  static QString fontSize;
  static QString pickColor;
  static QString pattern;
  static QString fillStyle;
  static QString extent1X;
  static QString extent1Y;
  static QString extent2X;
  static QString extent2Y;
  static QString radius;
  static QString startAngle;
  static QString endAngle;
  static QString curveStyle;
  static QString figaro;
  static QString remove;
  static QString errorLocation;
  static QString fileLocation;
  static QString readOnly;
  static QString writable;
  static QString workingDirectory;
  static QString iconView;
  static QString diagramView;
  static QString textView;
  static QString documentationView;
  static QString searchClasses;
  static QString findReplaceModelicaText;
  static QString left;
  static QString center;
  static QString right;
  static QString createConnection;
  static QString findVariables;
  static QString openClass;
  static QString openClassTip;
  static QString viewDocumentation;
  static QString viewDocumentationTip;
  static QString dontShowThisMessageAgain;
  static QString clickAndDragToResize;
  static QString variables;
  static QString variablesBrowser;
  static QString description;
  static QString previous;
  static QString next;
  static QString reload;
  static QString index;
  static QString equation;
  static QString transformationalDebugger;
  static QString executionCount;
  static QString executionMaxTime;
  static QString executionTime;
  static QString executionFraction;
  static QString debuggingFileNotSaveInfo;
  static QString algorithmicDebugger;
  static QString debugConfigurations;
  static QString resume;
  static QString interrupt;
  static QString exit;
  static QString stepOver;
  static QString stepInto;
  static QString stepReturn;
  static QString attachToRunningProcess;
  static QString crashReport;
  static QString parsingFailedJson;
  static QString expandAll;
  static QString collapseAll;
  static QString version;
  static QString unlimited;
  static QString simulationOutput;
  static QString cancelSimulation;
  static QString fetchInterfaceData;
  static QString fetchInterfaceDataTip;
  static QString tlmCoSimulationSetup;
  static QString tlmCoSimulationSetupTip;
  static QString tlmCoSimulation;
  static QString running;
  static QString finished;
};

class GUIMessages : public QObject
{
  Q_OBJECT
public:
  enum MessagesTypes
  {
    CHECK_MESSAGES_BROWSER,
    SAME_COMPONENT_NAME,
    SAME_COMPONENT_CONNECT,
    NO_MODELICA_CLASS_OPEN,
    SIMULATION_STARTTIME_LESSTHAN_STOPTIME,
    ENTER_NAME,
    EXTENDS_CLASS_NOT_FOUND,
    INSERT_IN_CLASS_NOT_FOUND,
    INSERT_IN_SYSTEM_LIBRARY_NOT_ALLOWED,
    MODEL_ALREADY_EXISTS,
    ITEM_ALREADY_EXISTS,
    OPENMODELICAHOME_NOT_FOUND,
    ERROR_OCCURRED,
    ERROR_IN_MODELICA_TEXT,
    REVERT_PREVIOUS_OR_FIX_ERRORS_MANUALLY,
    NO_OPENMODELICA_KEYWORDS,
    UNABLE_TO_LOAD_FILE,
    UNABLE_TO_OPEN_FILE,
    UNABLE_TO_SAVE_FILE,
    FILE_NOT_FOUND,
    ERROR_OPENING_FILE,
    UNABLE_TO_LOAD_MODEL,
    DELETE_AND_LOAD,
    REDEFINING_EXISTING_CLASSES,
    MULTIPLE_TOP_LEVEL_CLASSES,
    DIAGRAM_VIEW_DROP_MSG,
    ICON_VIEW_DROP_MSG,
    PLOT_PARAMETRIC_DIFF_FILES,
    FILE_FORMAT_NOT_SUPPORTED,
    ENTER_VALID_NUMBER,
    ITEM_DROPPED_ON_ITSELF,
    MAKE_REPLACEABLE_IF_PARTIAL,
    INNER_MODEL_NAME_CHANGED,
    FMU_GENERATED,
    XML_GENERATED,
    FIGARO_GENERATED,
    UNLOAD_CLASS_MSG,
    DELETE_CLASS_MSG,
    DELETE_TEXT_FILE_MSG,
    WRONG_MODIFIER,
    SET_INFO_XML_FLAG,
    DEBUG_CONFIGURATION_EXISTS_MSG,
    DEBUG_CONFIGURATION_SIZE_EXCEED,
    DELETE_DEBUG_CONFIGURATION_MSG,
    DEBUGGER_ALREADY_RUNNING,
    CLASS_NOT_FOUND,
    BREAKPOINT_INSERT_NOT_SAVED,
    BREAKPOINT_INSERT_NOT_MODELICA_CLASS,
    TLMMANAGER_NOT_SET,
    METAMODEL_UNSAVED,
    TLMCOSIMULATION_ALREADY_RUNNING,
    TERMINAL_COMMAND_NOT_SET
  };

  static QString getMessage(int type);
};


namespace OpenModelica {
  QString& tempDirectory();
  QSettings* getApplicationSettings();
}

#endif // HELPER_H
