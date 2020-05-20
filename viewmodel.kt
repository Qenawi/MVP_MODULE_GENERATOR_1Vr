class ${ViewModelName}ViewModel(app: Application, val useCase: ${UseCaseName}UseCase) :
    BaseViewModel< ${UseCaseName}UseCase>(app, useCase) {
    private val mLoading = MutableLiveData<Boolean>()
    val mResult = MutableLiveData<${Response}>()
    fun doWork() {
        mLoading.value = true
    }

    private fun handle${ViewModelName}ViewModelSucess(data: ${Response}) {
        mLoading.value = false
        mResult.value = data
    }

    private fun handle${ViewModelName}ViewModelFail(fail: Failure) {
        mLoading.value = false
        toastMutable.postValue(fail)
    }
}