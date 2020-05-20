import os
import sys
import json
import appData

cPatternFileNames=["repo.kt","usecase.kt","viewmodel.kt"]
cPatternComponents=["Repo","UseCase","ViewModel"]
cContent=["${RepoName}","${UseCaseName}","${Response}","${ViewModelName}"]
def createFeature():
    featureName = input("Feature Name?:"+"\n")
    responseType = input("ResponseType?:"+"\n")
    print("Generating--"+featureName+" ---->  Repo/UseCase/ViewModel...")
    for i in range(3):
     #reading 
     fFile=open(cPatternFileNames[i], "r").read() #repo /usecase / viewmodel
     #editing
     fFile= fFile.replace(cContent[0],featureName)
     fFile= fFile.replace(cContent[1],featureName)
     fFile= fFile.replace(cContent[2],responseType)
     fFile= fFile.replace(cContent[3],featureName)
     #writing
     wirteFile=open(featureName+cPatternComponents[i]+".kt", "w")
     wirteFile.write(fFile)
     wirteFile.close()
def project():
 #   appJs=json.load(jsFile)
   add=input("add or load project config ?"+"\n")
   if add == "add":
     jsFile=open("apps.json", "r")
     jsArray=json.load(jsFile)
     pName=input("ProjectName?"+"\n")
     pPath=input("ProjectPath?"+"\n")   
     pPackge=input("ProjectPackge?"+"\n")
     myApp=appData.AndroidApplication()
     myApp.name=pName
     myApp.path=pPath
     myApp.packe=pPackge
     jsonStr = json.dumps(myApp.__dict__)
     appJs=(jsonStr)
     jsArray.append(appJs)
     jswrite=open("apps.json", "w")
     json.dump(jsArray,jswrite)
   else :
        jsRead=open("apps.json", "r")
        jsOut=json.load(jsRead)
        for i in jsOut:
            print(i['name']+"\n") 

